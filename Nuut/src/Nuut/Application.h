#pragma once
#include "Core.h"

namespace Nuut 
{
	class NUUT_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	//should be defined in CLIENT
	Application* CreateApplication();
}

