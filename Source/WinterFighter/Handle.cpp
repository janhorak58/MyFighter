// Fill out your copyright notice in the Description page of Project Settings.


#include "Handle.h"
#include "Ramp.h"


void AHandle::HandleActivated() 
{
    for (ARamp* Ramp :RampsToOpen)
    {
        Ramp->SetMoveTrue();
    }
}
