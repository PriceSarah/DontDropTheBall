#pragma once
#include "Application.h"
#include "Renderer2D.h"
#include "PhysicsScene.h"
#include "Sphere.h"

///
///The actual scene run in main
///
class PhysicsSceneApp : public aie::Application {
public:
	PhysicsSceneApp();
	virtual ~PhysicsSceneApp();

	virtual bool startup();
	virtual void shutdown();

	virtual void update(float deltaTime);
	virtual void draw();

	void initializeBall();

	void setupContinuousDemo(glm::vec2 initialPosition, glm::vec2 initialVelocity, float gravity);

	glm::vec2 calculateVelocity(glm::vec2 initialPosition, glm::vec2 finalPosition, float gravity, float time);

	float maxBalls = 10;
	float currentBalls = 0;
	Sphere* playerBall;

protected:
	aie::Renderer2D* m_2dRenderer;
	aie::Font* m_font;
	PhysicsScene* m_physicsScene;
};