# first Makefile of c34031328.
# this Makefile use wkhtml to make html to pdf. 

# to see converted pdf file
open = xdg-open

# use `wkhtmltopdf` , `-n` flag for disable javascript. 
html2pdf_program = wkhtmltopdf
html2pdf_flag = -n --print-media-type
html2pdf = $(html2pdf_program) $(html2pdf_flag)

# all html document, without `index.html` and `index_old.html`. 
html_file = $(filter-out index%.html, $(wildcard *.html))
pdf_file = $(html_file:.html=.pdf)

.PHONY: default pdf index



default: pdf index.html

index.html: $(filter-out index.html, $(wildcard *))
	index

pdf: $(pdf_file)

%.pdf: %.html
	$(html2pdf) $< $@
	$(open) $@


