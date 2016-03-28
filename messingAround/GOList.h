#pragma once
#include "GameObjects.h"
#include <vector>


namespace bab
{
	struct GO_List
	{	
	public:
		std::vector<GameObjects*> goPtrList;
		std::vector<std::string> goNameList;
	
		unsigned int objCount = 0;
		unsigned int idCount = 0;

		//pass in an existing object to add to the list of gameObjects
		void addObject(GameObjects*);
		void addID(std::string*);
		void changeID(std::string , std::string);
		//Creates (instantiates) a brand new game object 
		void createObject(std::string);

		

		 
	};
	//initialize the gameObject list


}
