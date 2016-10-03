#!/usr/bin/sed -i -f

/<p class="calibre_11">/ {

        :notmatch

                #讀取下一行
                N          

        #若沒有字串 '<br' 就跳到 :notmatch
        /<br/ !b notmatch  

        #取代
        s/<br/; <br/       
}
