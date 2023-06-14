from setuptools import setup, Extension

stathis = Extension('stathis', sources=['stathis.c'])

setup(
    name='stathis',
    version='1.0',
    description='This is a demo package',
    ext_modules=[stathis],
)