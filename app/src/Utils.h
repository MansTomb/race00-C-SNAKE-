#pragma once

#include "Snake.h"

sf::RectangleShape getRectangleAt( sf::Vector2f location, sf::Color color );
bool CheckCollision(const sf::RectangleShape& a, const sf::RectangleShape& b);
