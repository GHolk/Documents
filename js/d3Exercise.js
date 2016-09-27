
var dataBirth = function () {

    var a = loco.parseTable( document.getElementsByTagName('table')[0] );

    (function arrayParseNumber(a) {
        var i,l,cell;
        for(i=0,l=a.length; i<l; i++){
            cell = a[i];
            if(Array.isArray(cell)) arrayParseNumber(cell);
            else if (Number(cell)) a[i] = Number(cell);
        }
    })(a);

    (function cumulate(a) {
        var sum = 0, i, l;

        for(i=0, l=a.length; i<l; i++){
            a[i].push(sum);
            sum += a[i][1];
        }

        a.sum = sum;
    })(a);

    return a;
}();

var path = d3.select("#chart")
    .selectAll("path").data(dataBirth)
    .enter().append("path");

path.attr("d", function(d,i){
    /*
    var x1 = 100, x2 = 100 + d[1] * 22;
    var y1 = i * 40, y2 = i * 40 + 30;
    return (
        "M" + x1 + " " + y1 +
        "L" + x2 + " " + y1 +
        "L" + x2 + " " + y2 +
        "L" + x1 + " " + y2 + "Z"
    );
    */
    var o = 100, height = 15, width = d[1]*22;

    return [
        'M', o, i*20,
        'h', width,
        'v', height,
        'h', -width,
        'Z'
    ].join(' ');

    /*
    return [
        'M',o,' ',(i*40),
        'a',1,0,',', 0,0,0, width,0,
        'l',0,height,
        'a',1,0,',', 0,0,0, -width,0,
        'Z'
    ].join(' ');

    return [
        'M',o[0],o[1],
        'A',0,1,',', 0,0,0, o[0]+width, o[1],
        'L', o[0]+width, o[1]+height,
        'A',0,1,',', 0,0,0, o[0],o[1]+height,
        'Z'
    ].join(' ');

    return (
        'M' + o + ' ' + (i*40) + ' ' +
        'h' + width + ' ' +
        'v' + height + ' ' +
        'h' + (-width) + ' ' +
        'Z'
    );
    */
});

var arc = d3.svg.arc().innerRadius(140).outerRadius(160);

document.getElementById('chart').onclick = function transform() {

    if(transform.isCircle){
        path.transition().duration(500).attr({
            transform: "",
            d: function(d,i) {
                var o = 100, height = 15, width = d[1]*22;

                return [
                    'M', o, i*20,
                    'h', width,
                    'v', height,
                    'h', -width,
                    'Z'
                ].join(' ');
            }
        });
        transform.isCircle = false;

    } else {
        path.transition().duration(500).attr({
            transform: "translate(400,200)",
            d: function (d,i) { 
                var sum = dataBirth.sum;
                return arc
                    .startAngle( 6.2832 * d[2] / sum )
                    .endAngle( 6.2832 * (d[2] + d[1]) / sum )
                    ();
            }
        });
        transform.isCircle = true;
    }
};

var color = d3.scale.category20();
path.attr("fill", function (d,i) { return color(d[0]); });


