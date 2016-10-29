# first Makefile of c34031328.
# this Makefile use wkhtml to make html to pdf. 

html2pdf = wkhtmltopdf -n
stock = stock_market
general = general_finance
html_file = $(wildcard *.html)
file_no_sufix = $(html_file:.html=)
pdf_file = $(html_file:.html=.pdf)

.PHONY: default pdf



default: pdf index

pdf: $(file_no_sufix)

%: %.html
	$(html2pdf) $@.html $@.pdf

