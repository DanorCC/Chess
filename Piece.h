/*
 * Piece.h
 *
 *  Created on: 2017-12-01
 *      Author: etudiant
 */

#ifndef PIECE_H_
#define PIECE_H_

#include <vector>
#include "Board.h"

namespace piece {

class Piece {
public:
	Piece();
	virtual ~Piece();

	virtual void generateMoveSet(board::Board::pos actualPos);
	virtual std::vector<board::Board::pos>& getMoveSet();

protected:
	std::vector<board::Board::pos> m_moveSet;

};

} /* namespace piece */

#endif /* PIECE_H_ */
