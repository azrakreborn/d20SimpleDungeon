#include "QuestItem.h"

using namespace std;

QuestItem::QuestItem() 
{
	type = "NULL";
}

QuestItem::~QuestItem() 
{

}

QuestItem::QuestItem(string name) : Item(name, 0)
{
	type = "Quest";
}