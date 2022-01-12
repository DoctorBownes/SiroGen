#pragma once
#include <map>
#include <iostream>

#include <SiroGen/transform.h>
#include <SiroGen/component.h>
#include <SiroGen/sprite.h>
#include <SiroGen/animation.h>
#include <SiroGen/model.h>
#include <SiroGen/pixelsprite.h>

class Entity
{
public:
	Entity();
	~Entity();

	void Addchild(Entity* entity);
	void Removechild(Entity* entity);
	void DeleteEntity(Entity* entity);
	std::vector<Entity*> Getchildren() { return _children; };
	std::vector<Entity*> _children;

	template <typename T>
	T* AddComponent();

	template <typename T>
	T* GetComponent();

	template <typename T>
	void RemoveComponent();

	void update();
	std::map<size_t, Component*> GetComponentList() { return componentlist; };

	Transform* transform;
private:
	std::map<size_t, Component*> componentlist;
};

template <typename T>
T* Entity::AddComponent()
{
	if (!componentlist.count(typeid(T).hash_code()))
	{
		T* test = new T();
		componentlist.emplace(typeid(T).hash_code(), test);
		return static_cast<T*>(componentlist[typeid(T).hash_code()]);
	}
	std::cout << "Error: cannot add two of the same component" << std::endl;
	return nullptr;
}

template <typename T>
T* Entity::GetComponent()
{
	if (componentlist.count(typeid(T).hash_code()))
	{
		return static_cast<T*>(componentlist[typeid(T).hash_code()]);
	}
	std::cout << "Error: component not found" << std::endl;
	return nullptr;
}

template <typename T>
void Entity::RemoveComponent()
{
	if (componentlist.count(typeid(T).hash_code()))
	{
		componentlist.erase(componentlist.find(typeid(T).hash_code()));
	}
	else
	{
		std::cout << "Warning: component set to remove was not found" << std::endl;
	}
}