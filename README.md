#  Love Story: Computer Graphics Project

A 2D OpenGL animation made with C++ and GLUT. It tells a short love story across four animated scenes that you switch between with the keyboard.

## ✨ Features
- 4 separate scenes, each in its own class (`Scene1` to `Scene4`)
- Real-time animation with a ~60 FPS timer loop
- Keyboard controls for switching scenes and interacting
- Double buffering for smooth rendering

## 🎬 The Story
| Scene | Description |
|-------|-------------|
| 1️⃣ **The Meeting** | Two people meet in a park and sit together on a branch. |
| 2️⃣ **Rainy Walk** | They walk down a road sharing an umbrella on a rainy day. |
| 3️⃣ **The Goodbye** | At a railway station, the girl leaves him with a letter. |
| 4️⃣ **Alone** | He sits alone on a hill, left with his memories. |

## 🎮 Controls
| Key | Action |
|-----|--------|
| `1` `2` `3` `4` | Jump to a scene |
| `N` / `Tab` | Next scene |
| `B` | Previous scene |
| Arrow keys | Scene-specific controls (Scenes 1, 2, 4) |
| `Esc` | Exit |

## 🛠️ Tech Stack
- **Language:** C++
- **Graphics:** OpenGL, GLUT (FreeGLUT)

## ▶️ How to Run
1. Install a C++ compiler and FreeGLUT.
2. Clone the repo:
```bash
   git clone https://github.com/Arikh24/ComputerGrapics-Project.git
   cd ComputerGrapics-Project
```
3. Compile:
```bash
   g++ main.cpp Scene1.cpp Scene2.cpp Scene3.cpp Scene4.cpp -o LoveStory -lfreeglut -lopengl32 -lglu32
```
   On Linux, use `-lGL -lGLU -lglut` instead.
4. Run `./LoveStory`

> You can also open the files in Visual Studio or Code::Blocks and link the GLUT libraries.
