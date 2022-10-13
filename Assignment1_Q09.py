""" Write a program that draws a red line connecting two points (-39, 48) and (50, -50) and displays 
the coordinates of the two points """

import turtle

tur = turtle.Turtle()

tur.pencolor("red")

x = (-39, 48)
y = (50, -50)

tur.penup()
tur.goto(x)
tur.write("("+str(x)+")")
tur.pendown()
tur.goto(y)
tur.write("("+str(y)+")")
turtle.done()
