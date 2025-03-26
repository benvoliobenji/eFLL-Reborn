# Integrating

There are a few ways to integrate eFLL-Reborn into your project.

## How to install (using CPM)

In whatever CMake file you add your third-party projects:

```text
CPMAddPackage(
    NAME "eFLL"
    GIT_REPOSITORY https://github.com/benvoliobenji/eFLL-Reborn
    GIT_TAG {tag or branch}
)
```

## How to install (general use)

**Step 1:** Go to the official project page on GitHub (Here)

**Step 2:** Make a clone of the project using Git or download at Download on the
button "Download as zip."

**Step 3:** Clone or unzip (For safety, rename the folder to "eFLL") the files
into some folder

**Step 4:** Compile and link it to your code (See Makefile)
