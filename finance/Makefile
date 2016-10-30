# first Makefile of c34031328.
# this Makefile use wkhtml to make html to pdf. 

# to see converted pdf file
open = xdg-open

# use `wkhtmltopdf` , `-n` flag for disable javascript. 
html2pdf = wkhtmltopdf -n

# all html document, without `index.html` and `index_old.html`. 
html_file = $(filter-out index%.html, $(wildcard *.html))
pdf_file = $(html_file:.html=.pdf)

.PHONY: default pdf index



default: pdf index

index: *
	index

pdf: $(pdf_file)

%.pdf: %.html
	$(html2pdf) $< $@
	$(open) $@


