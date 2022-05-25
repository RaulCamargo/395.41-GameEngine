#pragma once

#include "Flapjack.h"
#include "Entity.h"

class BoomApp : public FJ::FlapjackApp
{
public: 
	BoomApp();
	virtual void OnUpdate() override;

	bool Collide(const Entity& one, Entity& two);

private:
	Entity mHero{ {"Assets/Images/HeroL.png", "Assets/Images/HeroR.png"} };
	std::vector<Entity> mVillain{ { {"Assets/Images/Villain.png"} } };

	int mEnemyVSpeed{ -5 };

	int mHorzSpeed{ 0 };  // Speed measured in pixel per frame.
};