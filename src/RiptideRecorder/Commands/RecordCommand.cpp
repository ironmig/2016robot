/*
 * RecordCommand.cpp
 *
 *  Created on: Apr 5, 2015
 *      Author: kma1660
 */

#include "RecordCommand.h"

RecordCommand::RecordCommand(Macro* m) {
	macro = m;
}
void RecordCommand::Initialize() {
	std::cout << "Record Started" << std::endl;
	macro->Reset();
}

void RecordCommand::Execute() {
	macro->Record();
}

bool RecordCommand::IsFinished() {
	return false;
}

void RecordCommand::End() {

}
void RecordCommand::Interrupted() {
	End();
}
