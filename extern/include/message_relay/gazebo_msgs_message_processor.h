// Generated by message_relay for processing frame IDs in gazebo_msgs messages and services.
// DO NOT EDIT


#ifndef MESSAGE_RELAY_GAZEBO_MSGS_MESSAGE_PROCESSOR_H
#define MESSAGE_RELAY_GAZEBO_MSGS_MESSAGE_PROCESSOR_H

#include "message_relay/processor/message_processor.h"

#include "gazebo_msgs/ContactsState.h"
#include "gazebo_msgs/ContactState.h"
#include "gazebo_msgs/LinkState.h"
#include "gazebo_msgs/LinkStates.h"
#include "gazebo_msgs/ModelState.h"
#include "gazebo_msgs/ModelStates.h"
#include "gazebo_msgs/ODEJointProperties.h"
#include "gazebo_msgs/ODEPhysics.h"
#include "gazebo_msgs/PerformanceMetrics.h"
#include "gazebo_msgs/SensorPerformanceMetric.h"
#include "gazebo_msgs/WorldState.h"

#include "gazebo_msgs/ApplyBodyWrench.h"
#include "gazebo_msgs/DeleteModel.h"
#include "gazebo_msgs/DeleteLight.h"
#include "gazebo_msgs/GetLinkState.h"
#include "gazebo_msgs/GetPhysicsProperties.h"
#include "gazebo_msgs/SetJointProperties.h"
#include "gazebo_msgs/SetModelConfiguration.h"
#include "gazebo_msgs/SpawnModel.h"
#include "gazebo_msgs/ApplyJointEffort.h"
#include "gazebo_msgs/GetJointProperties.h"
#include "gazebo_msgs/GetModelProperties.h"
#include "gazebo_msgs/GetWorldProperties.h"
#include "gazebo_msgs/SetLinkProperties.h"
#include "gazebo_msgs/SetModelState.h"
#include "gazebo_msgs/BodyRequest.h"
#include "gazebo_msgs/GetLinkProperties.h"
#include "gazebo_msgs/GetModelState.h"
#include "gazebo_msgs/JointRequest.h"
#include "gazebo_msgs/SetLinkState.h"
#include "gazebo_msgs/SetPhysicsProperties.h"
#include "gazebo_msgs/SetJointTrajectory.h"
#include "gazebo_msgs/GetLightProperties.h"
#include "gazebo_msgs/SetLightProperties.h"

namespace message_relay
{

template<>
void MessageProcessor<gazebo_msgs::ModelState, FrameIdProcessor>::processMessage(gazebo_msgs::ModelState::Ptr &msg, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void MessageProcessor<gazebo_msgs::ODEJointProperties, FrameIdProcessor>::processMessage(gazebo_msgs::ODEJointProperties::Ptr &msg, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void MessageProcessor<gazebo_msgs::ModelStates, FrameIdProcessor>::processMessage(gazebo_msgs::ModelStates::Ptr &msg, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void MessageProcessor<gazebo_msgs::ContactsState, FrameIdProcessor>::processMessage(gazebo_msgs::ContactsState::Ptr &msg, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void MessageProcessor<gazebo_msgs::LinkStates, FrameIdProcessor>::processMessage(gazebo_msgs::LinkStates::Ptr &msg, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void MessageProcessor<gazebo_msgs::LinkState, FrameIdProcessor>::processMessage(gazebo_msgs::LinkState::Ptr &msg, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void MessageProcessor<gazebo_msgs::PerformanceMetrics, FrameIdProcessor>::processMessage(gazebo_msgs::PerformanceMetrics::Ptr &msg, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void MessageProcessor<gazebo_msgs::ODEPhysics, FrameIdProcessor>::processMessage(gazebo_msgs::ODEPhysics::Ptr &msg, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void MessageProcessor<gazebo_msgs::ContactState, FrameIdProcessor>::processMessage(gazebo_msgs::ContactState::Ptr &msg, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void MessageProcessor<gazebo_msgs::WorldState, FrameIdProcessor>::processMessage(gazebo_msgs::WorldState::Ptr &msg, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void MessageProcessor<gazebo_msgs::SensorPerformanceMetric, FrameIdProcessor>::processMessage(gazebo_msgs::SensorPerformanceMetric::Ptr &msg, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::BodyRequest, FrameIdProcessor>::processRequest(gazebo_msgs::BodyRequest::Request &req, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::BodyRequest, FrameIdProcessor>::processResponse(gazebo_msgs::BodyRequest::Response &res, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetLightProperties, FrameIdProcessor>::processRequest(gazebo_msgs::GetLightProperties::Request &req, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetLightProperties, FrameIdProcessor>::processResponse(gazebo_msgs::GetLightProperties::Response &res, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetModelProperties, FrameIdProcessor>::processRequest(gazebo_msgs::GetModelProperties::Request &req, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetModelProperties, FrameIdProcessor>::processResponse(gazebo_msgs::GetModelProperties::Response &res, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetModelState, FrameIdProcessor>::processRequest(gazebo_msgs::GetModelState::Request &req, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetModelState, FrameIdProcessor>::processResponse(gazebo_msgs::GetModelState::Response &res, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::SpawnModel, FrameIdProcessor>::processRequest(gazebo_msgs::SpawnModel::Request &req, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::SpawnModel, FrameIdProcessor>::processResponse(gazebo_msgs::SpawnModel::Response &res, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetWorldProperties, FrameIdProcessor>::processRequest(gazebo_msgs::GetWorldProperties::Request &req, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetWorldProperties, FrameIdProcessor>::processResponse(gazebo_msgs::GetWorldProperties::Response &res, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetJointTrajectory, FrameIdProcessor>::processRequest(gazebo_msgs::SetJointTrajectory::Request &req, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetJointTrajectory, FrameIdProcessor>::processResponse(gazebo_msgs::SetJointTrajectory::Response &res, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetModelState, FrameIdProcessor>::processRequest(gazebo_msgs::SetModelState::Request &req, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetModelState, FrameIdProcessor>::processResponse(gazebo_msgs::SetModelState::Response &res, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::ApplyBodyWrench, FrameIdProcessor>::processRequest(gazebo_msgs::ApplyBodyWrench::Request &req, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::ApplyBodyWrench, FrameIdProcessor>::processResponse(gazebo_msgs::ApplyBodyWrench::Response &res, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::DeleteLight, FrameIdProcessor>::processRequest(gazebo_msgs::DeleteLight::Request &req, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::DeleteLight, FrameIdProcessor>::processResponse(gazebo_msgs::DeleteLight::Response &res, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetJointProperties, FrameIdProcessor>::processRequest(gazebo_msgs::GetJointProperties::Request &req, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetJointProperties, FrameIdProcessor>::processResponse(gazebo_msgs::GetJointProperties::Response &res, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetPhysicsProperties, FrameIdProcessor>::processRequest(gazebo_msgs::GetPhysicsProperties::Request &req, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetPhysicsProperties, FrameIdProcessor>::processResponse(gazebo_msgs::GetPhysicsProperties::Response &res, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetLightProperties, FrameIdProcessor>::processRequest(gazebo_msgs::SetLightProperties::Request &req, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetLightProperties, FrameIdProcessor>::processResponse(gazebo_msgs::SetLightProperties::Response &res, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetLinkProperties, FrameIdProcessor>::processRequest(gazebo_msgs::SetLinkProperties::Request &req, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetLinkProperties, FrameIdProcessor>::processResponse(gazebo_msgs::SetLinkProperties::Response &res, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetJointProperties, FrameIdProcessor>::processRequest(gazebo_msgs::SetJointProperties::Request &req, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetJointProperties, FrameIdProcessor>::processResponse(gazebo_msgs::SetJointProperties::Response &res, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::JointRequest, FrameIdProcessor>::processRequest(gazebo_msgs::JointRequest::Request &req, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::JointRequest, FrameIdProcessor>::processResponse(gazebo_msgs::JointRequest::Response &res, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetPhysicsProperties, FrameIdProcessor>::processRequest(gazebo_msgs::SetPhysicsProperties::Request &req, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetPhysicsProperties, FrameIdProcessor>::processResponse(gazebo_msgs::SetPhysicsProperties::Response &res, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::ApplyJointEffort, FrameIdProcessor>::processRequest(gazebo_msgs::ApplyJointEffort::Request &req, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::ApplyJointEffort, FrameIdProcessor>::processResponse(gazebo_msgs::ApplyJointEffort::Response &res, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetModelConfiguration, FrameIdProcessor>::processRequest(gazebo_msgs::SetModelConfiguration::Request &req, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetModelConfiguration, FrameIdProcessor>::processResponse(gazebo_msgs::SetModelConfiguration::Response &res, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetLinkState, FrameIdProcessor>::processRequest(gazebo_msgs::SetLinkState::Request &req, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetLinkState, FrameIdProcessor>::processResponse(gazebo_msgs::SetLinkState::Response &res, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::DeleteModel, FrameIdProcessor>::processRequest(gazebo_msgs::DeleteModel::Request &req, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::DeleteModel, FrameIdProcessor>::processResponse(gazebo_msgs::DeleteModel::Response &res, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetLinkState, FrameIdProcessor>::processRequest(gazebo_msgs::GetLinkState::Request &req, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetLinkState, FrameIdProcessor>::processResponse(gazebo_msgs::GetLinkState::Response &res, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetLinkProperties, FrameIdProcessor>::processRequest(gazebo_msgs::GetLinkProperties::Request &req, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetLinkProperties, FrameIdProcessor>::processResponse(gazebo_msgs::GetLinkProperties::Response &res, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void MessageProcessor<gazebo_msgs::ModelState, TimeProcessor>::processMessage(gazebo_msgs::ModelState::Ptr &msg, TimeProcessor::ConstPtr &time_processor);

template<>
void MessageProcessor<gazebo_msgs::ODEJointProperties, TimeProcessor>::processMessage(gazebo_msgs::ODEJointProperties::Ptr &msg, TimeProcessor::ConstPtr &time_processor);

template<>
void MessageProcessor<gazebo_msgs::ModelStates, TimeProcessor>::processMessage(gazebo_msgs::ModelStates::Ptr &msg, TimeProcessor::ConstPtr &time_processor);

template<>
void MessageProcessor<gazebo_msgs::ContactsState, TimeProcessor>::processMessage(gazebo_msgs::ContactsState::Ptr &msg, TimeProcessor::ConstPtr &time_processor);

template<>
void MessageProcessor<gazebo_msgs::LinkStates, TimeProcessor>::processMessage(gazebo_msgs::LinkStates::Ptr &msg, TimeProcessor::ConstPtr &time_processor);

template<>
void MessageProcessor<gazebo_msgs::LinkState, TimeProcessor>::processMessage(gazebo_msgs::LinkState::Ptr &msg, TimeProcessor::ConstPtr &time_processor);

template<>
void MessageProcessor<gazebo_msgs::PerformanceMetrics, TimeProcessor>::processMessage(gazebo_msgs::PerformanceMetrics::Ptr &msg, TimeProcessor::ConstPtr &time_processor);

template<>
void MessageProcessor<gazebo_msgs::ODEPhysics, TimeProcessor>::processMessage(gazebo_msgs::ODEPhysics::Ptr &msg, TimeProcessor::ConstPtr &time_processor);

template<>
void MessageProcessor<gazebo_msgs::ContactState, TimeProcessor>::processMessage(gazebo_msgs::ContactState::Ptr &msg, TimeProcessor::ConstPtr &time_processor);

template<>
void MessageProcessor<gazebo_msgs::WorldState, TimeProcessor>::processMessage(gazebo_msgs::WorldState::Ptr &msg, TimeProcessor::ConstPtr &time_processor);

template<>
void MessageProcessor<gazebo_msgs::SensorPerformanceMetric, TimeProcessor>::processMessage(gazebo_msgs::SensorPerformanceMetric::Ptr &msg, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::BodyRequest, TimeProcessor>::processRequest(gazebo_msgs::BodyRequest::Request &req, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::BodyRequest, TimeProcessor>::processResponse(gazebo_msgs::BodyRequest::Response &res, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetLightProperties, TimeProcessor>::processRequest(gazebo_msgs::GetLightProperties::Request &req, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetLightProperties, TimeProcessor>::processResponse(gazebo_msgs::GetLightProperties::Response &res, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetModelProperties, TimeProcessor>::processRequest(gazebo_msgs::GetModelProperties::Request &req, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetModelProperties, TimeProcessor>::processResponse(gazebo_msgs::GetModelProperties::Response &res, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetModelState, TimeProcessor>::processRequest(gazebo_msgs::GetModelState::Request &req, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetModelState, TimeProcessor>::processResponse(gazebo_msgs::GetModelState::Response &res, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::SpawnModel, TimeProcessor>::processRequest(gazebo_msgs::SpawnModel::Request &req, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::SpawnModel, TimeProcessor>::processResponse(gazebo_msgs::SpawnModel::Response &res, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetWorldProperties, TimeProcessor>::processRequest(gazebo_msgs::GetWorldProperties::Request &req, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetWorldProperties, TimeProcessor>::processResponse(gazebo_msgs::GetWorldProperties::Response &res, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetJointTrajectory, TimeProcessor>::processRequest(gazebo_msgs::SetJointTrajectory::Request &req, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetJointTrajectory, TimeProcessor>::processResponse(gazebo_msgs::SetJointTrajectory::Response &res, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetModelState, TimeProcessor>::processRequest(gazebo_msgs::SetModelState::Request &req, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetModelState, TimeProcessor>::processResponse(gazebo_msgs::SetModelState::Response &res, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::ApplyBodyWrench, TimeProcessor>::processRequest(gazebo_msgs::ApplyBodyWrench::Request &req, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::ApplyBodyWrench, TimeProcessor>::processResponse(gazebo_msgs::ApplyBodyWrench::Response &res, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::DeleteLight, TimeProcessor>::processRequest(gazebo_msgs::DeleteLight::Request &req, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::DeleteLight, TimeProcessor>::processResponse(gazebo_msgs::DeleteLight::Response &res, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetJointProperties, TimeProcessor>::processRequest(gazebo_msgs::GetJointProperties::Request &req, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetJointProperties, TimeProcessor>::processResponse(gazebo_msgs::GetJointProperties::Response &res, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetPhysicsProperties, TimeProcessor>::processRequest(gazebo_msgs::GetPhysicsProperties::Request &req, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetPhysicsProperties, TimeProcessor>::processResponse(gazebo_msgs::GetPhysicsProperties::Response &res, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetLightProperties, TimeProcessor>::processRequest(gazebo_msgs::SetLightProperties::Request &req, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetLightProperties, TimeProcessor>::processResponse(gazebo_msgs::SetLightProperties::Response &res, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetLinkProperties, TimeProcessor>::processRequest(gazebo_msgs::SetLinkProperties::Request &req, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetLinkProperties, TimeProcessor>::processResponse(gazebo_msgs::SetLinkProperties::Response &res, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetJointProperties, TimeProcessor>::processRequest(gazebo_msgs::SetJointProperties::Request &req, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetJointProperties, TimeProcessor>::processResponse(gazebo_msgs::SetJointProperties::Response &res, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::JointRequest, TimeProcessor>::processRequest(gazebo_msgs::JointRequest::Request &req, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::JointRequest, TimeProcessor>::processResponse(gazebo_msgs::JointRequest::Response &res, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetPhysicsProperties, TimeProcessor>::processRequest(gazebo_msgs::SetPhysicsProperties::Request &req, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetPhysicsProperties, TimeProcessor>::processResponse(gazebo_msgs::SetPhysicsProperties::Response &res, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::ApplyJointEffort, TimeProcessor>::processRequest(gazebo_msgs::ApplyJointEffort::Request &req, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::ApplyJointEffort, TimeProcessor>::processResponse(gazebo_msgs::ApplyJointEffort::Response &res, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetModelConfiguration, TimeProcessor>::processRequest(gazebo_msgs::SetModelConfiguration::Request &req, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetModelConfiguration, TimeProcessor>::processResponse(gazebo_msgs::SetModelConfiguration::Response &res, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetLinkState, TimeProcessor>::processRequest(gazebo_msgs::SetLinkState::Request &req, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::SetLinkState, TimeProcessor>::processResponse(gazebo_msgs::SetLinkState::Response &res, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::DeleteModel, TimeProcessor>::processRequest(gazebo_msgs::DeleteModel::Request &req, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::DeleteModel, TimeProcessor>::processResponse(gazebo_msgs::DeleteModel::Response &res, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetLinkState, TimeProcessor>::processRequest(gazebo_msgs::GetLinkState::Request &req, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetLinkState, TimeProcessor>::processResponse(gazebo_msgs::GetLinkState::Response &res, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetLinkProperties, TimeProcessor>::processRequest(gazebo_msgs::GetLinkProperties::Request &req, TimeProcessor::ConstPtr &time_processor);

template<>
void ServiceProcessor<gazebo_msgs::GetLinkProperties, TimeProcessor>::processResponse(gazebo_msgs::GetLinkProperties::Response &res, TimeProcessor::ConstPtr &time_processor);

}  // namespace message_relay

#endif // MESSAGE_RELAY_GAZEBO_MSGS_MESSAGE_PROCESSOR_H
