import turtle
from turtle import*

wn = Screen()
wn.bgcolor('black')

t= tuple.Turtle()
t.pencolor('white')

def curve():
    for i in range(2000):
        t.rt(1)
        t.fd(1)
        
def heart():
    t.fillcolor('red')
    t.begin_fill()
    t.lt(140)
    t.fd(113)
    curve()
    t.lt(120)
    curve()
    t.fd(112)
    t.end_fill()
    
