#include "Swarm.h"

namespace domi {

Swarm::Swarm() {
	m_pParticles = new Particle[NPARTICLES];

}
Swarm::~Swarm() {
	delete[] m_pParticles;
}
}