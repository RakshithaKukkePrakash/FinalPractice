/*
 * ParallelResistorConnection.cpp
 *
 *  Created on: 03-Aug-2024
 *      Author: acer
 */

#include "ParallelResistorConnection.h"

ParallelResistorConnection::ParallelResistorConnection(std::string name):ResistorConnection(name)
{
}

char ParallelResistorConnection::separator() const
{
	return '|';
}

float ParallelResistorConnection::nominalValue() const
{
	float nomNum = 0;
	float nomDen = 1;
	for(auto list: resistors){
		nomNum*= list->nominalValue();
		nomDen+= list->nominalValue();
	}
	return nomNum/nomDen;
}

float ParallelResistorConnection::minimumValue() const
{
	float minNum = 0;
	float minDen = 1;
	for(auto list: resistors){
		minNum*= list->nominalValue();
		minDen+= list->nominalValue();
	}
	return minNum/minDen;
}

float ParallelResistorConnection::maximumValue() const
{
	float maxNum = 0;
	float maxDen = 1;
	for(auto list: resistors){
		maxNum*= list->nominalValue();
		maxDen+= list->nominalValue();
	}
	return maxNum/maxDen;
}

ParallelResistorConnection::~ParallelResistorConnection()
{
	// TODO Auto-generated destructor stub
}

