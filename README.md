# Physics II Companion App

An app built to assist college students in the proccess of taking the Physics II course by providing an evironment for making simulations of various kinds.

## Overview

This project is a desktop application designed to assist students taking a **Physics II (Electricity and Magnetism)** course by providing an interactive environment for exploring physical concepts through simulation.

The program allows users to construct and visualize systems involving **electric charges, electric fields, and basic electrical circuits**, and observe their behavior through graphical simulations. By combining numerical calculations with visual representations, the application aims to help students better understand how physical quantities interact and evolve in different scenarios.

Users can create and load simulation scenes, define parameters for predefined physical models, and observe results through **2D or 3D visualizations** that display vectors, electric fields, and other relevant physical quantities. The goal of the project is not only to compute results but also to provide intuitive visual tools that make abstract concepts easier to explore and understand.

The application is initially being developed for **Windows using C++**, with the possibility of supporting additional platforms in the future.

## Architecture

The project is divided into for subsystems:

1. **Core:** this is the **scientific computation layer** of the program. It performs all mathematical and physical calculations used by the simulations.

2. **Simulation:** this manages the **state and behavior of the simulated world**.

3. **Graphics and UI:** combines rendering and user interaction.

4. **Application infraestructure:** includes all **support and system-level components** needed for the application to function.

Each of these subsystems will be described in more detail and further divided later.
