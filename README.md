# LearnSphinxInC

## Start Sphinx
Install the Sphinx packages
```
pip install sphinx
pip install sphinx_rtd_theme
```
## Clone the repository
```
git clone https://github.com/rajeshrimal516/LearnSphinxInC
```
## Generate Doxygen XML files

Download DoxyWizard from https://www.doxygen.nl/download.html according to the OS and install it.

Open DoxyWizard -> File -> Open

Search Doxyfile.in from LearnSpinxInC/docs and open it.

Click Run Doxygen

This generates the Doxygen folder and inside it the xmls.

Close the DoxyWizard

## Generate HTML file

```
cd LearnSphinxInC/docs
make html

```
The ***index.html*** will be generated inside the build/html folder.
