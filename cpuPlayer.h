/*
 * cpuPlayer.h
 *
 *  Created on: 2017-12-01
 *      Author: etudiant
 */

#ifndef CPUPLAYER_H_
#define CPUPLAYER_H_

#include "basePlayer.h"

namespace player {

class cpuPlayer: public basePlayer {
public:
	cpuPlayer();
	virtual ~cpuPlayer();
};

} /* namespace player */

#endif /* CPUPLAYER_H_ */
