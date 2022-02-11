#include "test.h"
#include <sstream>

Entity* guy;
Entity* gal;
Entity* don;
SpriteAnimation smokeAnim;
SpriteAnimation galAnim;
SpriteAnimation waveAnim;
Player* jon;
float starttime = 0.0f;
int counter = 0;
Test::Test() : Scene()
{
	GetMainCamera()->SetZoom(10);/*
	char canvas[]
	{
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0xf,0xf,0xf,0xf,0xf,0xf,0x0,
		0x0,0x0,0xf,0xf,0x1,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0xf,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0x0,0xf,0xf,0x0,0x0,0x0,
		0x0,0xf,0xf,0xf,0x1,0xf,0xf,0x0,
		0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,
		0xf,0x0,0xf,0xf,0x1,0xf,0x0,0xf,
		0xf,0x0,0xf,0xf,0x1,0xf,0x0,0xf,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0x0,0xf,0x0,0x0,
		0x0,0x0,0xf,0x0,0x0,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0x0,0xf,0xf,0x0,
	};
	char canvas2[]
	{
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0xf,0xf,0xf,0xf,0xf,0xf,0x0,
		0x0,0x0,0xf,0xf,0x1,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0xf,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0x0,0xf,0xf,0x0,0x0,0x0,
		0x0,0xf,0xf,0xf,0x1,0xf,0xf,0x0,
		0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,
		0xf,0x0,0xf,0xf,0x1,0xf,0x0,0xf,
		0xf,0x0,0xf,0xf,0x1,0xf,0x0,0xf,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0x0,0xf,0x0,0x0,
		0x0,0x0,0xf,0x0,0x0,0xf,0xf,0x0,
		0x0,0x0,0xf,0xf,0x0,0x0,0x0,0x0,
	};
	char canvas3[]
	{
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0xf,0xf,0xf,0xf,0xf,0xf,0x0,
		0x0,0x0,0xf,0xf,0x1,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0xf,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0x0,0xf,0xf,0x0,0x0,0x0,
		0x0,0xf,0xf,0xf,0x1,0xf,0xf,0x0,
		0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,
		0xf,0x0,0xf,0xf,0x1,0xf,0x0,0xf,
		0xf,0x0,0xf,0xf,0x1,0xf,0x0,0xf,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0xf,0x0,0x0,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0x0,0xf,0x0,0x0,
		0x0,0x0,0x0,0x0,0x0,0xf,0xf,0x0,
	};*/
	char canvas4[]
	{
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0xf,0xf,0xf,0xf,0xf,0xf,0x0,
		0x0,0x0,0xf,0xf,0x1,0xf,0x0,0x1,
		0x0,0x0,0xf,0xf,0xf,0xf,0xf,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0xe,0xe,
		0x0,0x0,0x0,0xf,0xf,0x0,0x0,0x0,
		0x0,0xf,0xf,0xf,0x1,0xf,0xf,0x0,
		0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,
		0xf,0x0,0xf,0xf,0x1,0xf,0x0,0xf,
		0xf,0x0,0xf,0xf,0x1,0xf,0x0,0xf,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0x0,0xf,0x0,0x0,
		0x0,0x0,0xf,0x0,0x0,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0x0,0xf,0xf,0x0,
	};
	char canvas5[]
	{
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0xf,0xf,0xf,0xf,0xf,0xf,0x1,
		0x0,0x0,0xf,0xf,0x1,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0xf,0x1,
		0x0,0x0,0xf,0xf,0xf,0xf,0xe,0xe,
		0x0,0x0,0x0,0xf,0xf,0x0,0x0,0x0,
		0x0,0xf,0xf,0xf,0x1,0xf,0xf,0x0,
		0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,
		0xf,0x0,0xf,0xf,0x1,0xf,0x0,0xf,
		0xf,0x0,0xf,0xf,0x1,0xf,0x0,0xf,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0x0,0xf,0x0,0x0,
		0x0,0x0,0xf,0x0,0x0,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0x0,0xf,0xf,0x0,
	};
	char galcanvas[]
	{
		0x0,0x0,0x7,0x7,0x7,0x0,0x0,0x0,
		0x0,0x7,0x0,0x7,0x7,0x7,0x0,0x0,
		0x7,0x0,0x7,0x7,0x7,0x7,0x0,0x0,
		0x7,0x7,0x7,0x7,0x1,0x7,0x0,0x0,
		0x7,0x7,0x7,0x7,0x7,0x7,0x7,0x0,
		0x7,0x0,0x7,0x7,0x7,0x7,0x0,0x0,
		0x7,0x0,0x0,0x7,0x7,0x0,0x0,0x0,
		0x0,0x7,0x7,0x7,0x7,0x7,0x7,0x0,
		0x0,0x6,0x7,0x7,0x7,0x7,0x6,0x0,
		0x0,0x0,0x6,0x7,0x7,0x6,0x0,0x0,
		0x0,0x0,0x7,0x6,0x6,0x7,0x0,0x0,
		0x0,0x7,0x7,0x7,0x7,0x7,0x7,0x0,
		0x0,0x7,0x7,0x7,0x7,0x7,0x7,0x0,
		0x7,0x7,0x7,0x7,0x7,0x7,0x7,0x7,
		0x0,0x0,0x7,0x0,0x0,0x7,0x0,0x0,
		0x0,0x0,0x7,0x7,0x0,0x7,0x7,0x0,
	};
	char waveCanvas[]
	{
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0xf,0xf,0xf,0xf,0xf,0xf,0x0,
		0x0,0x0,0xf,0xf,0x1,0xf,0x0,0xf,
		0x0,0x0,0xf,0xf,0xf,0xf,0xf,0xf,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0xf,
		0x0,0x0,0x0,0xf,0xf,0x0,0x0,0xf,
		0x0,0xf,0xf,0xf,0x1,0xf,0xf,0xf,
		0xf,0xf,0xf,0xf,0xf,0xf,0x0,0x0,
		0xf,0x0,0xf,0xf,0x1,0xf,0x0,0x0,
		0xf,0x0,0xf,0xf,0x1,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0x0,0xf,0x0,0x0,
		0x0,0x0,0xf,0x0,0x0,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0x0,0xf,0xf,0x0,
	};
	char waveCanvas2[]
	{
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0xf,0xf,0xf,0xf,0xf,0xf,0x0,
		0x0,0x0,0x0,0xf,0xf,0x0,0x0,0xf,
		0x0,0x0,0xf,0xf,0x1,0xf,0x0,0xf,
		0x0,0x0,0xf,0xf,0xf,0xf,0xf,0xf,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0xf,
		0x0,0x0,0x0,0xf,0xf,0x0,0x0,0xf,
		0x0,0xf,0xf,0xf,0x1,0xf,0xf,0xf,
		0xf,0xf,0xf,0xf,0xf,0xf,0x0,0x0,
		0xf,0x0,0xf,0xf,0x1,0xf,0x0,0x0,
		0xf,0x0,0xf,0xf,0x1,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0xf,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0x0,0xf,0x0,0x0,
		0x0,0x0,0xf,0x0,0x0,0xf,0x0,0x0,
		0x0,0x0,0xf,0xf,0x0,0xf,0xf,0x0,
	};

	char doncanvas[]
	{
		0x0,0x0,0xd,0xd,0xd,0xd,0x0,0x0,
		0x0,0xc,0xc,0xc,0x1,0x1,0x0,0x0,
		0x0,0x0,0xd,0xd,0xc,0xc,0xc,0x0,
		0x0,0x0,0xd,0xd,0x1,0xd,0x0,0x0,
		0x0,0x0,0xd,0xd,0xd,0xd,0xd,0x0,
		0x0,0x0,0xd,0xd,0xd,0xd,0x0,0x0,
		0x0,0x0,0x0,0xd,0xd,0x0,0x0,0x0,
		0x0,0xd,0xc,0xd,0x1,0xd,0xc,0x0,
		0xd,0xd,0xd,0xc,0x1,0xc,0xd,0xd,
		0xd,0xd,0xd,0xd,0xc,0xd,0xd,0xd,
		0xd,0xd,0xd,0xd,0xc,0xd,0xd,0xd,
		0xc,0xc,0xd,0xd,0xd,0xd,0xd,0xc,
		0x0,0xd,0xd,0xd,0xd,0xd,0xd,0x0,
		0x0,0xd,0xd,0xd,0x0,0xd,0xd,0x0,
		0x0,0xd,0xd,0x0,0x0,0xd,0xd,0x0,
		0x0,0xd,0xd,0xd,0x0,0xd,0xd,0xd,
	};
	char doncanvas1[]
	{
		0x0,0x0,0xd,0xd,0xd,0xd,0x0,0x0,
		0x0,0xc,0xc,0xc,0x1,0x1,0x0,0x0,
		0x0,0x0,0xd,0xd,0xc,0xc,0xc,0x0,
		0x0,0x0,0xd,0xd,0xd,0xd,0x0,0x0,
		0x0,0x0,0xd,0xd,0xd,0xd,0xd,0x0,
		0x0,0x0,0xd,0xd,0xd,0xd,0x0,0x0,
		0x0,0x0,0x0,0xd,0xd,0x0,0x0,0x0,
		0x0,0xd,0xc,0xd,0x1,0xd,0xc,0x0,
		0xd,0xd,0xd,0xc,0x1,0xc,0xd,0xd,
		0xd,0xd,0xd,0xd,0xc,0xd,0xd,0xd,
		0xd,0xd,0xd,0xd,0xc,0xd,0xd,0xd,
		0xc,0xc,0xd,0xd,0xd,0xd,0xd,0xc,
		0x0,0xd,0xd,0xd,0xd,0xd,0xd,0x0,
		0x0,0xd,0xd,0xd,0x0,0xd,0xd,0x0,
		0x0,0xd,0xd,0x0,0x0,0xd,0xd,0x0,
		0x0,0xd,0xd,0xd,0x0,0xd,0xd,0xd,
	};
	jon = new Player();
	jon->transform->position->y = 8;
	//walkAnim.AddSprite(canvas, 8, 16,  0.2f);
	//walkAnim.AddSprite(canvas2, 8, 16, 0.2f);
	//walkAnim.AddSprite(canvas3, 8, 16, 0.2f);

	waveAnim.AddSprite(waveCanvas, 8, 16, 0.5f);
	waveAnim.AddSprite(waveCanvas2, 8, 16, 0.5f);

	smokeAnim.AddSprite(canvas4, 8, 16, 0.1f);
	smokeAnim.AddSprite(canvas5, 8, 16, 0.1f);

	galAnim.AddSprite(doncanvas, 8, 16, 3.0f);
	galAnim.AddSprite(doncanvas1, 8, 16, 0.1f);

	don = new Entity;
	don->AddComponent<Animation>()->PlayAnimation(&galAnim);
	don->AddComponent<Text>()->SetText("Spaghetti", 5,20,8,0xd);
	don->AddComponent<Collider>()->SetUpSquare(0.0f,0.0f,8,16);
	don->transform->position->x = 0;
	//don->AddComponent<Text>()->printText2D("Mario Mario",2,15, 5.0f, 0xd);

	//galAnim.AddSprite(galcanvas, 8, 16, 0.6f);
	//galAnim.AddSprite(galcanvas2, 8, 16,0.6f);
	//galAnim.AddSprite(galcanvas3, 8, 16,0.6f);
	//galAnim.AddSprite(canvas4, 8, 16,0.6f);
	//galAnim.AddSprite(canvas5, 8, 16,0.6f);
	//this->AddtoScene(jon);
	gal = new Entity;
	gal->AddComponent<Sprite>()->SetSprite(galcanvas, 8,16);
	gal->AddComponent<Collider>()->SetUpSquare(0.0f, 0.0f, 8, 16);
	gal->transform->position->x = 8;
	don->Addchild(gal);
	gal->Addchild(jon);

	//gal->AddComponent<Text>()->printText2D("Something inspiring.", 0, 0, 10);
	//RemoveTextfromScene();
	//*gal->transform->position = Vector3(0.0f, 0.0f);
	//guy->Addchild(gal);
	//guy->Addchild(don);
	//this->AddtoScene(gal);
	//this->AddtoScene(guy);
	this->Addchild(don);
	AddSceneText("Joey Aptin", 100.0f, 940.0f, 4.0f, 0xf);
}

void Test::update(float deltaTime)
{
	//std::stringstream hello;
	//hello << "Colliding = " << gal->GetComponent<Collider>()->isColliding(don);
	//EditSceneText(hello.str());
	//if (GetInput()->MouseOver(gal))
	//{
	//	std::cout << "You are over me" << std::endl;
	//}

	if (GetInput()->KeyPressed(KeyCode::LeftControl))
	{
		this->DeleteChild(don);
		//don->DeleteChild(gal);
	}
	if (GetInput()->KeyPressed(KeyCode::Escape))
	{
		isRunning = false;
	}
	//GetMainCamera()->position.x = guy->transform->position->x;
	//GetMainCamera()->position.y = guy->transform->position->y;
}