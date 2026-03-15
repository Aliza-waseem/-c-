# Gesture Control System + C++ Personality Quiz

This repository contains two projects:

1. **Camera Studio** (`index.html`) — a gesture-controlled web app with live filters and photo capture.  
2. **PsychePulse** (`programng project.cpp`) — a C++ terminal personality quiz.

---

## 📷 How to See the Camera Studio (index.html)

### Option 1 — Open directly in your browser (easiest)

1. Click the green **`<> Code`** button on the GitHub repository page.
2. Click **Download ZIP** and unzip the folder on your computer.
3. Open the unzipped folder, then **double-click `index.html`**.  
   It will open in your default browser — no installation needed.

> **Tip:** Use **Google Chrome** or **Microsoft Edge** for the best experience.  
> Firefox may block the camera; if it does, use Chrome instead.

### Option 2 — View live via GitHub Pages

If GitHub Pages is enabled for this repository:

1. Go to: `https://aliza-waseem.github.io/-c-/`  
   *(The `-c-` part is the actual name of this repository.)*
2. The Camera Studio loads automatically in your browser.

To enable Pages (repository owner only):  
**Settings → Pages → Source → Deploy from a branch → main → / (root) → Save**

### Option 3 — Run a local server (for developers)

```bash
# Using Python (comes pre-installed on most systems)
cd /path/to/downloaded/folder
python -m http.server 8000
# Then open: http://localhost:8000/index.html
```

---

## 🎮 How to Use the Camera Studio

Once the page is open:

| Step | What to do |
|------|-----------|
| 1 | Click **▶ Start Camera** and allow camera access when the browser asks. |
| 2 | Hold your hand in front of the camera to see the skeleton overlay. |
| 3 | Use the gestures below to control the app. |

### ✋ Gesture Controls

| Gesture | Hold for… | Action |
|---------|-----------|--------|
| ✌️ **Peace Sign** | ~1 second | 📸 Snap a photo — watch the progress bar fill, then the photo appears on the right |
| 🖐️ **Open Palm** | instant | 🎨 Cycle to the next filter |
| 👍 **Thumbs Up** | instant | ↩️ Reset back to the original (no filter) |
| ✊ **Fist** | instant | ⏸️ Pause / ▶️ Resume the live feed |

You can also click any filter button in the strip below the camera to switch filters with your mouse or finger (touchscreen).

### 🎨 Available Filters

| Filter | Effect |
|--------|--------|
| ✨ Original | No effect — raw camera feed |
| 🌑 Grayscale | Black and white |
| 🟤 Sepia | Warm brownish vintage tone |
| 💚 Neon | Green glow / cyberpunk look |
| 🔵 Cool Blue | Cold blue tones |
| 🔴 Warm Glow | Warm orange/red tones |
| 🌈 Vivid | Boosted, saturated colours |
| 🎞️ Vintage | Faded retro look with a dark vignette |
| 🌸 Blush | Soft pink glow |

### 📸 Viewing Your Captured Photo

- After the Peace Sign gesture, the captured photo appears in the **"Captured Photo"** panel on the right.
- A **⬇ Download Photo** button appears — click it to save the image to your device.

---

## 💻 How to Run the C++ Personality Quiz

### Requirements

- A C++ compiler: **g++** (Linux/Mac) or **MinGW / MSVC** (Windows).

### Compile and Run

```bash
# 1. Compile
g++ "programng project.cpp" -o quiz

# 2. Run
./quiz          # Linux / Mac
quiz.exe        # Windows
```

### How it works

1. Answer **8 questions** on a scale of 1–5.
2. The program analyses your answers and prints a personality report showing your **type**, **strengths**, and **weaknesses**.

---

## 🛠️ Browser Requirements for Camera Studio

| Browser | Supported |
|---------|-----------|
| Google Chrome 90+ | ✅ Recommended |
| Microsoft Edge 90+ | ✅ Works great |
| Firefox | ⚠️ May need `media.navigator.enabled = true` in `about:config` |
| Safari 15+ | ✅ Should work |
| Mobile Chrome (Android) | ✅ Works |
| Mobile Safari (iPhone) | ✅ Works on iOS 15+ |

> **Camera permission:** When you click "Start Camera", your browser will ask for camera access. Click **Allow**. Nothing is recorded or uploaded — everything runs entirely in your browser.
