# first Makefile of c34031328.
# this Makefile use wkhtml to make html to pdf. 

# to see converted pdf file
open = xdg-open

# use `wkhtmltopdf` , `-n` flag for disable javascript. 
html2pdf = wkhtmltopdf -n

# all html document, without `index.html` and `index_old.html`. 
# all_file = $(filter-out index%.html, %(wildcard *))
html_file = $(filter-out index%.html, $(wildcard *.html))
pdf_file = $(html_file:.html=.pdf)

.PHONY: default pdf index

default: pdf index.html

pdf: $(pdf_file)

index.html: $(filter-out index%.html, $(wildcard *))
	index

# 
# .SUFFIXES: .html .pdf
# .html.pdf:
# 	$(html2pdf) $< $@
# 	$(open) $@
# 

%.pdf: %.html ../word.css
	$(html2pdf) $< $@
	$(open) $@

