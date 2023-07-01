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
Download DoxyWidzard and install it.
Open DoxyWidzard -> File -> Open

Search Doxyfile.in from LearnSpinxInC/docs and open it.

Run Doxygen
This generates the Doxygen folder and inside it the xmls.

## Generate HTML file

```
cd LearnSphinxInC/docs

make html

```
The ***index.html*** will be generated inside the build/html folder.
