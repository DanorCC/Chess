/*
 * Game.h
 *
 *  Created on: 2017-12-01
 *      Author: etudiant
 */

#ifndef GAME_H_
#define GAME_H_

#include <time.h>

#include "Board.h"
#include "basePlayer.h"

class Game {
public:
	Game();
	virtual ~Game();

	const time_t getGameTime() const;

private:
	board::Board m_board;
	player::basePlayer m_playerOne;
	player::basePlayer m_playerTwo;
	time_t m_time;
};

#endif /* GAME_H_ */
