# Configuration file for the Sphinx documentation builder.
#
# For the full list of built-in configuration values, see the documentation:
# https://www.sphinx-doc.org/en/master/usage/configuration.html

# -- Project information -----------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#project-information
import os

project = 'LearnSphinxInC'
copyright = '2023, Ross Geller'
author = 'Ross Geller'
release = '1.0'

# -- General configuration ---------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#general-configuration
extensions = [
    "breathe",
    "sphinxcontrib.plantuml",
    "sphinxcontrib.needs"
]

doxygen_path = os.path.join(os.getcwd(),"..","doxygen//xml")
breathe_projects = {"LearnSphinxInC": doxygen_path}
breathe_implementation_filename_extensions = []
breathe_default_project = 'LearnSphinxInC'


templates_path = ['_templates']

exclude_patterns = []



# -- Options for HTML output -------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#options-for-html-output

html_theme = 'sphinx_rtd_theme'
html_static_path = ['_static']
