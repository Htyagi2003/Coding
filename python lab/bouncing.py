import os
os.environ['PYGAME_HIDE_SUPPORT_PROMPT'] = "hide"
import sys, pygame
from pygame.locals import *
pygame.init()

speed = [3, 1]
color = (10, 70, 30)
width = 800
height = 800
screen = pygame.display.set_mode((width, height))
pygame.display.set_caption("Pygame bouncing ball")

ball = pygame.image.load("D:\Coding\python lab/ball.jpg")
rect_boundry = ball.get_rect()

while 1:
    for event in pygame.event.get():
        if event.type == QUIT:
            pygame.quit()
            sys.exit()
        rect_boundry = rect_boundry.move(speed)
        if rect_boundry.left < 0 or rect_boundry.right > width:
            speed[0] = -speed[0]
        if rect_boundry.top < 0 or rect_boundry.bottom > height:
            speed[1] = -speed[1]

        screen.fill(color)
        screen.blit(ball, rect_boundry)
        pygame.display.flip()