#include "player.h"

Player::Player()
{
	deathAnim = new SpriteAnimation();

	char deathcanvas[]
	{
		0x0,0x0,0x0,0x0,0xf,0xf,0xf,0x0,0x0,0x0,
		0x0,0x0,0x0,0xf,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0x0,0xf,0xf,0xf,0xf,0xf,0xf,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0x1,0xf,0xf,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0xf,0x0,0x0,0x0,
		0x0,0x0,0x0,0xf,0xf,0xf,0x0,0xf,0x0,0x0,
		0x0,0x0,0x0,0xf,0xf,0x0,0x0,0x0,0x0,0x0,
		0x0,0x0,0xf,0xf,0x1,0x1,0xf,0x0,0x0,0x0,
		0x0,0xf,0xf,0xf,0x1,0x1,0xf,0xf,0x0,0x0,
		0xf,0xf,0xf,0xf,0x1,0x1,0x0,0xf,0xf,0x0,
		0xf,0xf,0x0,0xf,0x1,0x1,0x0,0x0,0x0,0x0,
		0x0,0x0,0x0,0xf,0xf,0xf,0x0,0x0,0xf,0x0,
		0x0,0x0,0x0,0xf,0xf,0xe,0xf,0xf,0xf,0x0,
		0x0,0x0,0x0,0xf,0xf,0xf,0xe,0xf,0xf,0x0,
		0x0,0x0,0x0,0x0,0xf,0xf,0xf,0x0,0x0,0x0,
		0x0,0x0,0x0,0x0,0x0,0xf,0xf,0xf,0x0,
	};

	char deathcanvas2[]
	{
		0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
		0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
		0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
		0x0,0x0,0x0,0xf,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0x0,0xf,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
		0x0,0xf,0xf,0xf,0x1,0xf,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
		0xf,0xf,0xf,0xf,0xf,0xf,0xf,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
		0x0,0xf,0xf,0xf,0xf,0xf,0xf,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0x1,0x1,0xf,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
		0x0,0x0,0x0,0x0,0x0,0xf,0x1,0x1,0x1,0xf,0x0,0x0,0xf,0xf,0xe,0x0,
		0x0,0x0,0x0,0x0,0x0,0xf,0xf,0x1,0x1,0x1,0x0,0x0,0x0,0xf,0xf,0x0,
		0x0,0x0,0x0,0x0,0xf,0xf,0xf,0xf,0x1,0x1,0x1,0x0,0xf,0xf,0xf,0xe,
		0x0,0x0,0x0,0xf,0xf,0xf,0x0,0xf,0xf,0x1,0xf,0xf,0xf,0xf,0xe,0xe,
		0x0,0x0,0x0,0x0,0xf,0x0,0x0,0x0,0xf,0xf,0xf,0xf,0xf,0xe,0xe,0x0,
		0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf,0xf,0xf,0xe,0x0,0x0,0x0,
		0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf,0xe,0x0,0x0,0x0,0x0
	};

	char deathcanvas3[]
	{
		0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
		0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
		0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
		0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
		0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
		0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
		0x0,0xd,0xd,0xd,0xd,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
		0xd,0x0,0x0,0x0,0x0,0xd,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
		0x0,0xd,0xd,0xd,0xd,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
		0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,0x0,
		0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe,0xe,0xe,0xf,0x0,0x0,0x0,
		0x0,0xf,0x0,0xf,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe,0xf,0x0,0x0,0x0,
		0xf,0xf,0xf,0xf,0xf,0x0,0x1,0x1,0x1,0x1,0x1,0xe,0xf,0x0,0x0,0x0,
		0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xe,0xf,0xf,0x0,0x0,0x0,
		0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xe,0xf,0x0,0x0,0x0,
		0xf,0xf,0xf,0xf,0xf,0x0,0xf,0xe,0xe,0xe,0xe,0xf,0xf,0x0,0x0,0x0
	};

	deathAnim->AddSprite(deathcanvas, 10, 16);
	deathAnim->AddSprite(deathcanvas2, 16, 16);
	deathAnim->AddSprite(deathcanvas3, 16, 16);

	walkAnim = new SpriteAnimation();

	char canvas[]
	{
		0x0,0x0,0x0,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0xf,0x0,
		0x0,0xf,0xf,0xf,0xf,0xf,0xf,0x0,
		0x0,0xf,0xf,0xf,0x1,0xf,0x0,0x0,
		0x0,0xf,0xf,0xf,0xf,0xf,0xf,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0x0,0xf,0xf,0x0,0x0,0x0,
		0x0,0xf,0xf,0x1,0x1,0xf,0x0,0x0,
		0xf,0xf,0xf,0x1,0x1,0xf,0xf,0x0,
		0xf,0xf,0xf,0x1,0x1,0xf,0xf,0x0,
		0xf,0xf,0xf,0x1,0x1,0xf,0xf,0x0,
		0x0,0xf,0xf,0xf,0x1,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xe,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xe,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xe,0xf,0x0
	};

	char canvas2[]
	{
		0x0,0x0,0x0,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0xf,0x0,
		0x0,0xf,0xf,0xf,0xf,0xf,0xf,0x0,
		0x0,0xf,0xf,0xf,0x1,0xf,0x0,0x0,
		0x0,0xf,0xf,0xf,0xf,0xf,0xf,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0x0,0xf,0xf,0x0,0x0,0x0,
		0x0,0xf,0xf,0x1,0x1,0xf,0x0,0x0,
		0xf,0xf,0xf,0x1,0x1,0xf,0xf,0x0,
		0xf,0xf,0xf,0x1,0x1,0xf,0xf,0x0,
		0xf,0xf,0xf,0x1,0x1,0xf,0xf,0x0,
		0x0,0xf,0xf,0xf,0x1,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0xf,0xf,0xf,0xf,0xf,0x0,0xf,
		0xf,0xf,0xe,0x0,0xf,0xf,0xf,0xf,
		0x0,0xf,0xf,0x0,0x0,0xf,0xf,0x0
	};

	char canvas3[]
	{
		0x0,0x0,0x0,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0xf,0x0,
		0x0,0xf,0xf,0xf,0xf,0xf,0xf,0x0,
		0x0,0xf,0xf,0xf,0x1,0xf,0x0,0x0,
		0x0,0xf,0xf,0xf,0xf,0xf,0xf,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0x0,0xf,0xf,0x0,0x0,0x0,
		0x0,0xf,0xf,0x1,0x1,0xf,0x0,0x0,
		0xf,0xf,0xf,0x1,0x1,0xf,0xf,0x0,
		0xf,0xf,0xf,0x1,0x1,0xf,0xf,0x0,
		0xf,0xf,0xf,0x1,0x1,0xf,0xf,0x0,
		0x0,0xf,0xf,0xf,0x1,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xe,0x0,0x0,0x0,
		0x0,0xf,0xf,0xe,0xf,0x0,0x0,0x0,
		0x0,0x0,0xf,0xf,0xe,0xf,0x0,0x0
	};

	smokeAnim = new SpriteAnimation();

	char canvas4[]
	{
		0x0,0x0,0x0,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0xf,0x0,
		0x0,0xf,0xf,0xf,0xf,0xf,0xf,0x0,
		0x0,0xf,0xf,0xf,0x1,0xf,0x0,0x0,
		0x0,0xf,0xf,0xf,0xf,0xf,0xf,0x1,
		0x0,0x0,0xf,0xf,0xf,0xf,0xe,0xe,
		0x0,0x0,0x0,0xf,0xf,0x0,0x0,0x0,
		0x0,0xf,0xf,0x1,0x1,0xf,0x0,0x0,
		0xf,0xf,0xf,0x1,0x1,0xf,0xf,0x0,
		0xf,0xf,0xf,0x1,0x1,0xf,0xf,0x0,
		0xf,0xf,0xf,0x1,0x1,0xf,0xf,0x0,
		0x0,0xf,0xf,0xf,0x1,0xf,0xf,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xe,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xe,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xe,0xf,0x0
	};

	char canvas5[]
	{
		0x0,0x0,0x0,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0xf,0x0,
		0x0,0xf,0xf,0xf,0xf,0xf,0xf,0x0,
		0x0,0xf,0xf,0xf,0x1,0xf,0x0,0x1,
		0x0,0xf,0xf,0xf,0xf,0xf,0xf,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0xe,0xe,
		0x0,0x0,0x0,0xf,0xf,0x0,0x0,0x0,
		0x0,0xf,0xf,0x1,0x1,0xf,0x0,0x0,
		0xf,0xf,0xf,0x1,0x1,0xf,0xf,0x0,
		0xf,0xf,0xf,0x1,0x1,0xf,0xf,0x0,
		0xf,0xf,0xf,0x1,0x1,0xf,0xf,0x0,
		0x0,0xf,0xf,0xf,0x1,0xf,0xf,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xe,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xe,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xe,0xf,0x0
	};

	walkAnim->AddSprite(canvas, 8, 16);
	walkAnim->AddSprite(canvas2, 8, 16);
	walkAnim->AddSprite(canvas3, 8, 16);

	smokeAnim->AddSprite(canvas4, 8, 16);
	smokeAnim->AddSprite(canvas5, 8, 16);

	speed = 20.0f;
	this->AddComponent<Animation>();
	this->GetComponent<Animation>()->PlayAnimation(walkAnim, false, 0, 0);
	this->AddComponent<Collider>()->SetUpCircle(0.0f, 0.0f, 8.0f);
}

void Player::update(float deltaTime)
{
	if (GetInput()->KeyDown(KeyCode::A))
	{
		this->GetComponent<Animation>()->PlayAnimation(walkAnim, false,1,2);
		this->transform->rotation->y = -180;
		this->transform->position->x -= speed * deltaTime;
	}
	else if (GetInput()->KeyDown(KeyCode::D))
	{
		this->GetComponent<Animation>()->PlayAnimation(walkAnim, false,1,2);
		this->transform->rotation->y = 0;
		this->transform->position->x += speed * deltaTime;
	}
	else if (GetInput()->KeyDown(KeyCode::W))
	{
		this->GetComponent<Animation>()->PlayAnimation(walkAnim, false, 1, 2);
		this->transform->position->y += speed * deltaTime;
	}
	else if (GetInput()->KeyDown(KeyCode::S))
	{
		this->GetComponent<Animation>()->PlayAnimation(walkAnim, false, 1, 2);
		this->transform->position->y -= speed * deltaTime;
	}
	else
	{
		this->GetComponent<Animation>()->PlayAnimation(walkAnim, false,0,0);
	}

	if (GetInput()->KeyPressed(KeyCode::Space))
	{
		this->GetComponent<Animation>()->PlayAnimation(deathAnim,true,0,2);
	}
}