'''Write a program that displays 10 random balls in a rectangle with width 120 and height 100, 
centered at (0, 0), as shown in the below figure. Use turtle module. Use a while loop to display 
the 10 random balls.'''

import turtle
import random

tur = turtle.Turtle()

tur.penup()
tur.goto(60, -50)
tur.pendown()

for _ in range (2):
    tur.left(90)
    tur.forward(100)
    tur.left(90)
    tur.forward(120)
tur.penup()
tur.goto(0, 0)

tur.pencolor('red')
count = 1
while count <= 10:
    x, y = random.randint(-55, 55), random.randint(-45,45)
    tur.goto(x, y)
    tur.pendown()
    tur.fillcolor('red')
    tur.begin_fill()
    tur.circle(5)
    tur.end_fill()
    tur.penup()
    count +=1

tur.hideturtle()
turtle.done()

