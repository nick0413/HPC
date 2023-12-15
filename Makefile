resultados.pdf : resultados.tex plot.pdf plot1.pdf
	pdflatex resultados.text
plot.pdf : plotdatos.py datos.dat
	python plotdatos1.py

plot1.pdf : plotdatos1.py datos1.dat
	python plotdatos1.py

datos.dat : makedatos.py
	python makedatos.py > datos.dat
datos1.dat : makedatos1.exe
	./makedatos1.exe > datos1
makedatos1.exe : makedatos1.cpp
	g++ makedatos1.cpp -o makedatos1.exe
