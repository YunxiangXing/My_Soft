#pragma once
#include <memory>
#include <fstream>
#include <vector>

#include "Physicalmesh.h"
#include "Mesherrormag.h"
#include "MeshAlgorithm.h"

class Mesh;

class FileIOVtu
{
public:
	FileIOVtu() = default;
	void meshTovtu(const std::shared_ptr<Mesh>& mesh, std::string cwd);
	void meshTovtu(const std::vector<T>& triangles, std::string cwd);
	void meshTovtu(const std::unordered_map<T, meshAlorithm::Circumcircle>& triangles, std::string cwd);

	void nodeTovtu(const std::vector<P>& nodes,std::string cwd);
private:

};