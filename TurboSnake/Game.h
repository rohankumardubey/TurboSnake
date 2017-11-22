#pragma once
#include "Structures.h"
#include "GameGrid.h"
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Font.hpp>


#define GRID_ROWS 30
#define GRID_COLS 30


class game
{
private:
	
	game_grid<GRID_ROWS, GRID_COLS> grid_;
	sf::Font& font_;
	sf::RenderTarget& r_target_;
public:
	explicit game(sf::Font& font, sf::RenderTarget& render_target);
	~game();
	/// \brief Input the given action to the snake
	void input(action action) const;
	/// \brief Perform a game tick/move the snake forwards
	void tick();
	/// \brief Update and Redraw the buffered game render area
	void update() const;
	/// \brief Get a game grid field size in pixels
	float field() const;

	/// \brief Pause or unpause the game
	bool paused = false;
};

