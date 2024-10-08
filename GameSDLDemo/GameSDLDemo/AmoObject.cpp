
#include "AmoObject.h"

AmoObject::AmoObject()
{
	rect_.x = 0;
	rect_.y = 0;
	x_val_ = 0;
	y_val_ = 0;
	is_move_ = false;
	amo_type_ = NONE;
}

AmoObject::~AmoObject()
{

}

void AmoObject::HandleMove(const int& x_border, const int& y_border)
{
	if (is_move_ == true)
	{
	rect_.x += x_val_/2;
	if (rect_.x > x_border)
	{
		is_move_ = false;
	}
	}
}

void AmoObject::HandleMoveRightToLeft()
{
	rect_.x -= x_val_*0.6;
	if(rect_.x < 0)
	{
		is_move_ = false;
	}
}

void AmoObject::HandleInputAction(SDL_Event events)
{
	;//Todo
}
