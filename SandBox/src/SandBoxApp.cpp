#include "Nuut.h"

class Sandbox :public Nuut::Application
{
public:
	Sandbox() {}
	~Sandbox() {}
};

Nuut::Application* Nuut::CreateApplication()
{
	return new Sandbox();
}