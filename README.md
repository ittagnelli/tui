# Simple TUI Library

Semplicissima libreria TUI (Textual User Interface) per gli studenti del terzo anno di Informatica

La libreria espone alcune semplicissime funzioni:


## void refresh()
- fa il refresh dello standard output


## void clear()

- pulisce lo schermo

## void go_to(int x, int y) 

- posiziona il cursore alla posizione x,y
- dove la coordinata 0,0 corrisponde all'angolo in alto a sinistra


## void set_color(int color)

- imposta il colore di scrittura a scelta tra
  - BIANCO
  - NERO
  - ROSSO
  - VERDE
  - GIALLO
  - BLU
  - MAGENTA
  - CIANO

## void set_bold(bool bold)

- imposta il carattere con stile bold(true) oppure normale(false)


## void panel(int x, int y, int w, int h, char sym)

- crea un pannello a largo w e alto h, a partire dalle coordinate x e y
- usa il carattere sym  per i bordi

# Esempi

- La directory esempi contiene alcuni semplici esempi che utilizzano la libreria

