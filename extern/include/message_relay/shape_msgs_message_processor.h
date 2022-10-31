// Generated by message_relay for processing frame IDs in shape_msgs messages and services.
// DO NOT EDIT


#ifndef MESSAGE_RELAY_SHAPE_MSGS_MESSAGE_PROCESSOR_H
#define MESSAGE_RELAY_SHAPE_MSGS_MESSAGE_PROCESSOR_H

#include "message_relay/processor/message_processor.h"

#include "shape_msgs/Mesh.h"
#include "shape_msgs/MeshTriangle.h"
#include "shape_msgs/Plane.h"
#include "shape_msgs/SolidPrimitive.h"


namespace message_relay
{

template<>
void MessageProcessor<shape_msgs::MeshTriangle, FrameIdProcessor>::processMessage(shape_msgs::MeshTriangle::Ptr &msg, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void MessageProcessor<shape_msgs::Mesh, FrameIdProcessor>::processMessage(shape_msgs::Mesh::Ptr &msg, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void MessageProcessor<shape_msgs::Plane, FrameIdProcessor>::processMessage(shape_msgs::Plane::Ptr &msg, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void MessageProcessor<shape_msgs::SolidPrimitive, FrameIdProcessor>::processMessage(shape_msgs::SolidPrimitive::Ptr &msg, FrameIdProcessor::ConstPtr &frame_id_processor);

template<>
void MessageProcessor<shape_msgs::MeshTriangle, TimeProcessor>::processMessage(shape_msgs::MeshTriangle::Ptr &msg, TimeProcessor::ConstPtr &time_processor);

template<>
void MessageProcessor<shape_msgs::Mesh, TimeProcessor>::processMessage(shape_msgs::Mesh::Ptr &msg, TimeProcessor::ConstPtr &time_processor);

template<>
void MessageProcessor<shape_msgs::Plane, TimeProcessor>::processMessage(shape_msgs::Plane::Ptr &msg, TimeProcessor::ConstPtr &time_processor);

template<>
void MessageProcessor<shape_msgs::SolidPrimitive, TimeProcessor>::processMessage(shape_msgs::SolidPrimitive::Ptr &msg, TimeProcessor::ConstPtr &time_processor);

}  // namespace message_relay

#endif // MESSAGE_RELAY_SHAPE_MSGS_MESSAGE_PROCESSOR_H