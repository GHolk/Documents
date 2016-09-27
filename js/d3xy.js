
var dataXY = function () {
    var raw = loco.parseTable(document.getElementById('xy')),
        d3Data = [];

    var i, x=raw[0], y=raw[1];
    for(i=0,l=x.length; i<l; i++)
        d3Data.push({'x': Number(x[i]), 'y': Number(y[i])});

    return d3Data;
        
}();

var svg = d3.select('#chart');

var line = d3.svg.line()
    .x( function (d) { return d.x*5; } )
    .y( function (d) { return d.y*5; } );

svg.append('path').attr({
    'd': line(dataXY),
    'y': 0,
    'stroke': '#F08',
    'stroke-width': '5px',
    'fill': 'none'
});
