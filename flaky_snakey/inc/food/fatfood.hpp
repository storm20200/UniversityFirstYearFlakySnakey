/*
   Program: Flaky Snakey
   Created by Simon Peter Campbell

   The purpose of Flaky Snakey is simply to show understanding of OOP concepts for my C++ Programming
   module. Using the supplied PRG library I had the task of creating a Snake-like game.

   Copyright (C) 2014 Simon Peter Campbell
   This file is part of Flaky Snakey.

   Flaky Snakey is free software: you can redistribute it and/or modify it under
   the terms of the GNU General Public License as published by the Free Software Foundation,
   either version 3 of the License, or any later version. Flaky Snakey is distributed
   in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied
   warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
   Public License for more details. You should have received a copy of the GNU General Public
   License along with Flaky Snakey. If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef FATFOOD_H
#define FATFOOD_H


/// STL
#include <cstdlib> // rand()


/// Personal
#include <food/food.hpp> // Parent


/// When eaten by a snake it causes the snake to grow.
/// FatFood is a leaf class.
class FatFood final : public Food
{
   public:
      /// Constructors and destructor
      // FatFood are orange
      FatFood (const Rectangle& rectangle = {10, 10, 0, 0}, const prg::Colour& colour = {255, 165, 0});

      FatFood (const unsigned short timerID, const unsigned int milliseconds,
               const Rectangle& rectangle = {10, 10, 0, 0}, const prg::Colour& colour = {255, 165, 0});

      FatFood (FatFood&& move) = default;
      FatFood (const FatFood& copy) = default;
      FatFood& operator= (const FatFood& copy) = default;
      ~FatFood() override = default;


      /// Assignment functions
      void setFoodEffect (unsigned int effectMin, unsigned int effectMax) override;

   protected:

   private:

};

#endif // FATFOOD_H
