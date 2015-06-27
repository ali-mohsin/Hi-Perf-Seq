# Scale font and line width (dpi) by changing the size! It will always display stretched.
set terminal svg size 400,300 enhanced fname 'arial'  fsize 10 butt solid
set output 'out.svg'

# Key means label...
set key inside top left
set xlabel 'Days (Ramzan Starts at 0)'
set ylabel 'USD'
set title 'Fundraiser Progress'
plot  "data.txt" using 1:3 title 'Expenses' with lines, "data.txt" using 1:2 title 'Contributions' with lines, "data.txt" using 1:4 title 'Target' with lines


# This file is called   force.dat
# Force-Deflection data for a beam and a bar
# Deflection    Col-Force       Beam-Force 
-10 0 0 3375
-9 195 0 3375
-8 285 0 3375
-7 605 0 3375
-6 605 0 3375
-5 935 0 3375
-4 945 0 3375
-3 945 0 3375
-2 1045 0 3375
-1 1045 40 3375
0 1145 40 3375
1 1155 106 3375
2 1355 172 3375
3 1803 238 3375
4 1823 304 3375
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30






