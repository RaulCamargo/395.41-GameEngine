#include "BoomApp.h"

BoomApp::BoomApp()
{
	SetKeyPressedCallBack([this](const FJ::KeyPressedEvent& e) {
		switch (e.GetKeyCode())
		{
		case FLAPJACK_KEY_LEFT:
			mHorzSpeed = -10;
			mHero.SetActiveImage(0);
			break;
		case FLAPJACK_KEY_RIGHT:		
			mHorzSpeed = 10;
			mHero.SetActiveImage(1);
			break;
		}
		});

	SetKeyReleasedCallBack([this](const FJ::KeyReleasedEvent& e) {
		mHorzSpeed = 0;
		});

	mVillain[0].SetX(600);
	mVillain[0].SetY(600);
}

void BoomApp::OnUpdate()
{
	mHero.SetX(mHero.GetX() + mHorzSpeed);

	if (mVillain[0].GetY() < 0)
		mEnemyVSpeed *= -1;
	else if (mVillain[0].GetY() > FJ::GameWindow::GetWindow()->GetHeight() - mVillain[0].GetHeight())
		mEnemyVSpeed *= -1;

	mVillain[0].SetY(mVillain[0].GetY() + mEnemyVSpeed);

	if (Collide(mVillain[0], mHero))
	{
		exit(0);
	}


	mHero.Draw();
	mVillain[0].Draw();
}

bool BoomApp::Collide(const Entity& one, Entity& two)
{
	int oneLeft{ one.GetX() };
	int oneRight{ one.GetX() + one.GetWidth() };
	int twoLeft{ two.GetX() };
	int twoRight{ two.GetX() + two.GetWidth() };

	int oneBottom{ one.GetY() };
	int oneTop{ one.GetY() + one.GetHeight() };
	int twoBottom{ two.GetY() };
	int twoTop{ two.GetY() + two.GetHeight() };

	bool collideX{ false };
	if ((oneLeft <= twoLeft && twoLeft <= oneRight) ||
		(twoLeft <= oneLeft && oneLeft <= twoRight))
		collideX = true;

	bool collideY{ false };
	if ((oneBottom <= twoBottom && twoBottom <= oneTop) ||
		(twoBottom <= oneBottom && oneBottom <= twoTop))
		collideY = true;

	return collideX && collideY;
}
