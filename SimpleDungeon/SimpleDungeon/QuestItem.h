#ifndef QUESTITEM_H
#define QUESTITEM_H

#include "Item.h"

class QuestItem : public Item 
{
public:
	QuestItem();
	~QuestItem();
	QuestItem(std::string);
};

#endif // !QUESTITEM_H
