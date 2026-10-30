# How to upload this repository to GitHub

## Option A – Command line (recommended)

1. Create an empty repository on github.com (e.g. `daa-lab`) — **do not** initialize it with a README.
2. From this folder, run:

```bash
cd DAA_Lab_GitHub
git init
git add .
git commit -m "DAA lab: 25 questions organized into 5 groups"
git branch -M main
git remote add origin https://github.com/<your-username>/daa-lab.git
git push -u origin main
```

Replace `<your-username>` and `daa-lab` with your GitHub username and the repo name you created.

## Option B – Web upload (no git needed)

1. Create a new repository on github.com.
2. Click **uploading an existing file**, then drag-and-drop **the contents of this folder** (all 5 group folders, `README.md`, `UPLOAD_TO_GITHUB.md` and `Original_DAA_Lab_Record.pdf`).
3. Commit. GitHub keeps folder structure automatically (that is how the 5 groups appear).

## Tips

- Total size is about 15 MB and 77 files — well within GitHub limits (file limit 100 MB each).
- The original record PDF (8 MB) is kept once at the root; it renders directly on GitHub.
- To add groups one at a time, drag-drop a single group folder per commit.
