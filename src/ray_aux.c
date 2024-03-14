#include "../headers/header.h"

/**
 * distanceBetweenPoints - Finds horizontal intersection with the wall
 * @x1: x starting point coordinate
 * @y1: y starting point coordinate
 * @x2: x end point coordinate
 * @y2: y end point coordinate 
 * Return: the distance between two points
 */

float distanceBetweenPoints(float x1, float y1, float x2, float y2)
{
	return (sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)));
}

/**
 * isRayFacingDown - it checks if the ray is facing down
 * @angle: current ray angle
 * Return: true or false
 */

bool isRayFacingDown(float angle)
{
	return (angle > 0 && angle < PI);
}

/**
 * isRayFacingUp - it checks if the ray is facing up
 * @angle: current ray angle
 * Return: true or false
 */

bool isRayFacingUp(float angle)
{
	return (!isRayFacingDown(angle));
}

/**
 * isRayFacingRight - it checks if the ray is facing to the right
 * @angle: current ray angle
 * Return: true or false
 */

bool isRayFacingRight(float angle)
{
	return (angle < 0.5 * PI || angle > 1.5 * PI);
}

/**
 * isRayFacingLeft - it checks if the ray is facing to the right
 * @angle: current ray angle
 * Return: true or false
 */

bool isRayFacingLeft(float angle)
{
	return (!isRayFacingRight(angle));
}

