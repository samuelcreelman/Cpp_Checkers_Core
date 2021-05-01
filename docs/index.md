# Checkers Documentation

1. [Overview](#overview)
2. [Gameplay](#gameplay)
    1. [Game Rules](#game-rules)
    2. [Gameflow](#gameflow)
3. [Assets](#assets)
    1. [Visual](#visual)
4. [AI](#ai)

# Overview
The game of Checkers created from scratch using C++ and SDL.

# Gameplay

## Game Rules
Gameplay is based on the traditional game of checkers where 2 players compete on an 8x8 board to capture all 12 of the opponents pieces before all of their pieces can be captured.

Thanks to https://www.officialgamerules.org/checkers for providing a written ruleset

### The Game of Checkers
Checkers is a board game played between two people on an 8x8 checked board like the one shown above.

Each player has 12 pieces that are like flat round disks that fit inside each of the boxes on the board. The pieces are placed on every other dark square and then staggered by rows, like shown on the board.

Each Checkers player has different colored pieces. Sometimes the pieces are black and red or red and white.

### Taking a Turn
Typically the darker color pieces moves first. Each player takes their turn by moving a piece. Pieces are always moved diagonally and can be moved in the following ways:

Diagonally in the forward direction (towards the opponent) to the next dark square.

If there is one of the opponent's pieces next to a piece and an empty space on the other side, you jump your opponent and remove their piece. You can do multiple jumps if they are lined up in the forward direction. *** note: if you have a jump, you have no choice but to take it.

### King Pieces:
The last row is called the king row. If you get a piece across the board to the opponent's king row, that piece becomes a king. Another piece is placed onto that piece so it is now two pieces high. King pieces can move in both directions, forward and backward.

Once a piece is kinged, the player must wait until the next turn to jump out of the king row.

### Winning the Game
You win the game when the opponent has no more pieces or can't move (even if he/she still has pieces). If neither player can move then it is a draw.

Custom Rule: If no piece is captured after 50 moves, the game ends in a draw.

## Gameflow
```
[Startup]
   |         
   v       
 [Main Menu] >==> [1 or 2 players?] >=> [1p]=========[2p]
   v     ^                               v            v         
   |     |                        [Checkers v AI]  [Checkers v Player] 
   |     |                               v            v
   |     ^=====================< [Game Over] <=========
   v   
 [Quit]
```

# Assets

## Visual
Text
- Open Sans

Images
- Game board
- Red pieces
    - Regular
    - King
- Black pieces
    - Regular
    - King

# AI
Coming Soon
