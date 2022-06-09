# BSQ

### Introduction

La BSQ est un programme qui permet de trouver le plus grand carré dans une map donnée.



### Fonctionnement

La map est un fichier text comme ci-dessous:

```
9$
...........................$
....o......................$
............o..............$
...........................$
....o......................$
..............o............$
...........................$
......o..............o.....$
..o.......o................$
```

La première ligne permet de préciser le nombre de lignes que comporte le fichier. Les "o" sont des obstacles et les "." des zones vides. Le but est de trouver le plus grand carré dans la map sans qu'il ne contienne d'obstacles ("o") à l'intérrieur.

Si on lance la BSQ avec la map exemple ci-dessus, on obtient le résultat suivant:

```
.....xxxxxxx................
....oxxxxxxx................
.....xxxxxxxo...............
.....xxxxxxx................
....oxxxxxxx................
.....xxxxxxx...o............
.....xxxxxxx................
......o...............o.....
..o.......o.................
```

Les "x" sont les les caractères qui composent le plus grand carré trouvé.

### Utilisation

Pour utiliser la BSQ il suffit de taper la comande suivant:

./bsq example\_file

Où example\_file est le nom du fichier texte contenant la map.
