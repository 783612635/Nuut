#pragma once

#ifdef NT_PLATFORM_WINDOWS

extern Nuut::Application* Nuut::CreateApplication();

int main(int argc,char** argv)
{
	auto app = Nuut::CreateApplication();
	app->Run();
	delete app;
	app = nullptr;
}
#endif