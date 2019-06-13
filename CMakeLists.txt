cmake_minimum_required(VERSION 3.13)
project(mastermindViews)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(controllers)
include_directories(models)
include_directories(views)

add_executable(mastermindViews
        controllers/ColocateController.cpp
        controllers/ColocateController.h
        controllers/ContinueController.cpp
        controllers/ContinueController.h
        controllers/Controller.cpp
        controllers/Controller.h
        models/Game.cpp
        models/Game.h
        controllers/Logic.cpp
        controllers/Logic.h
        controllers/StartController.cpp
        controllers/StartController.h
        controllers/State.h
        models/Color.cpp
        models/Color.h
        models/Combination.cpp
        models/Combination.h
        models/ProposedCombination.cpp
        models/ProposedCombination.h
        models/Result.cpp
        models/Result.h
        models/SecretCombination.cpp
        models/SecretCombination.h
        views/ContinueView.cpp
        views/ContinueView.h
        controllers/ControllerVisitor.h
        views/GameView.cpp
        views/GameView.h
        views/MastermindView.cpp
        views/MastermindView.h
        views/ProposedCombinationView.cpp
        views/ProposedCombinationView.h
        views/SecretCombinationView.cpp
        views/SecretCombinationView.h
        views/StartView.cpp
        views/StartView.h
        main.cpp
        Mastermind.cpp
        Mastermind.h)
