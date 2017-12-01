/*
 * Board.h
 *
 *  Created on: 2017-12-01
 *      Author: etudiant
 */

#ifndef BOARD_H_
#define BOARD_H_

namespace board {

class Board {
public:
	struct pos {int xPos; int yPos;};
	typedef enum {PAWN   = 1, 	/**< Pawn 	*/
				  KNIGHT = 200,	/**< Knight */
				  BISHOP = 201,	/**< Bishop */
				  ROOK 	 = 300,		/**< Rook 	*/
				  QUEEN  = 500,	/**< Queen 	*/
				  KING 	 = 2000		/**< King 	*/
	}pieceType;

	Board();
	virtual ~Board();

	const int getSquareValue(pos p_pos) const;
	const bool isMoveOK(pos p_start, pos p_end) const;

private:
	int m_board[8][8] =
	{
		{-ROOK, -KNIGHT, -BISHOP, -QUEEN, -KING, -BISHOP, -KNIGHT, -ROOK},
		{-PAWN, -PAWN,   -PAWN,   -PAWN,  -PAWN, -PAWN,   -PAWN,   -PAWN},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{PAWN, PAWN,   PAWN,   PAWN, PAWN,  PAWN,   PAWN,   PAWN},
		{ROOK, KNIGHT, BISHOP, KING, QUEEN, BISHOP, KNIGHT, ROOK}
	};
};

} /* namespace board */

#endif /* BOARD_H_ */
