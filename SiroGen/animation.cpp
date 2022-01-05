#include "animation.h"

Animation::Animation()
{
	starttime = glfwGetTime();
}

Animation::~Animation()
{

}

void Animation::PlayAnimation(SpriteAnimation* spriteanimation, bool loop)
{
	if (std::find(AnimationQueue.begin(), AnimationQueue.end(), spriteanimation) == AnimationQueue.end())
	{
		AnimationQueue.push_back(spriteanimation);
		//std::cout << "Animation Pushed" << std::endl;
		//std::cout << AnimationQueue.size() << std::endl;
		spriteanimation->isLooping = loop;
	}
	if (!isPlaying)
	{
		AnimationQueue.at(0)->it = AnimationQueue.at(0)->AniArray.begin();
		isPlaying = true;
	}
}

void Animation::StopAnimation()
{
	isPlaying = false;
}